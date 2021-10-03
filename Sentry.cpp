#include "pxt.h"
#include "Sentry/Sentry.h"

Sentry* pSentry[4]={nullptr};

enum SentryId {
    //% block="Sentry00"
    Sentry00=0,
    //% block="Sentry01"
    Sentry01,
    //% block="Sentry10"
    Sentry10,
    //% block="Sentry11"
    Sentry11
};

enum SentryStatus {
    //% block="enable"
    Enable=1,
    //% block="disable"
    Eisable=0
};

namespace sentry {

    /**
     * Initialize Sentry.
     */

    void begin(SentryId id, SentryVsMode port) {
        if (!pSentry[id]) {
            pSentry[id] = new Sentry(0x60+id);
        }
        if (port == kSerialMode) {
            pSentry[id]->begin(&uBit.serial);
        } else if (port == kI2CMode) {
            pSentry[id]->begin(&uBit.i2c);
        }
    }

    /**
     * Reset Sentry.
     */
    void setDefault(SentryId id){
        while(pSentry[id]->SensorSetDefault()!=Sentry_OK);
    }

    /**
     * Sentry vision begin.
     */
    void visionBegin(SentryId id, SentryStatus status, sentry_vision_e type){
        if (status) {
            while(pSentry[id]->VisionBegin(type)!=Sentry_OK);
        } else {
            pSentry[id]->VisionEnd(type);
        }
    }

    /**
     * set led color.
     * @param id Sentry id
     * @param led led type.
     * @param detected_color led color while sensor detected target.
     * @param undetected_color led color while sensor undetected target.
     */
    void ledSetColor(SentryId id, sentry_led_e led, sentry_led_color_e detected_color, sentry_led_color_e undetected_color) {
        if (detected_color == undetected_color) {
            while(pSentry[id]->LedSetMode(led, 1, 1) != Sentry_OK);
        } else {
            while(pSentry[id]->LedSetMode(led, 0, 0) != Sentry_OK);
        }
        while(pSentry[id]->LedSetColor(led, detected_color, undetected_color, 1) != Sentry_OK);
    }
    /**
     * set camera zoom.
     * @param id Sentry id
     * @param zoom zoom value.
     */
    void cameraSetZoom(SentryId id, sentry_camera_zoom_e zoom) {
        while(pSentry[id]->CameraSetZoom(zoom) != Sentry_OK);
    }

    /**
     * set camera white balance.
     * @param id Sentry id
     * @param wb white balance type.
     */
    void cameraSetAwb(SentryId id, sentry_camera_white_balance_e wb) {
        while(pSentry[id]->CameraSetAwb(wb) != Sentry_OK);
    }
    /**
     * set camera FPS.
     * @param id Sentry id
     * @param on FPS type.
     */
    void cameraSetFPS(SentryId id, bool on) {
        while(pSentry[id]->CameraSetFPS(SentryVsCameraFPS(on)) != Sentry_OK);
    }

    /**
     * get vision result data, this function will update vision result automatically.
     * @param id Sentry id
     * @param vision_type: vision type.
     * @param object_inf:  object information
    */
    int getValue(SentryId id, sentry_vision_e vision_type, sentry_obj_info_e object_inf) {
        return pSentry[id]->GetValue((SentryVisionType)visionTypeEnumToMacro(vision_type), object_inf);
    }
}