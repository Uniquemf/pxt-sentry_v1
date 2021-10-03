// Auto-generated. Do not edit.
declare namespace Sentry {

    /**
     * Initialize Sentry.
     */
    //% blockId=begin shim=Sentry::begin
    function begin(id: SentryId, port: sentry_mode_e): void;

    /**
     * Reset Sentry.
     */
    //% blockId=SensorSetDefault shim=Sentry::setDefault
    function setDefault(id: SentryId): void;

    /**
     * Sentry vision begin.
     */
    //% blockId=visionBegin shim=Sentry::visionBegin
    function visionBegin(id: SentryId, status: SentryStatus, type: sentry_vision_e): void;

    /**
     * set led color.
     * @param id Sentry id
     * @param led led type.
     * @param detected_color led color while sensor detected target.
     * @param undetected_color led color while sensor undetected target.
     */
    //% blockId=ledSetColor shim=Sentry::ledSetColor
    function ledSetColor(id: SentryId, led: sentry_led_e, detected_color: sentry_led_color_e, undetected_color: sentry_led_color_e): void;

    /**
     * set camera zoom.
     * @param id Sentry id
     * @param zoom zoom value.
     */
    //% blockId=cameraSetZoom shim=Sentry::cameraSetZoom
    function cameraSetZoom(id: SentryId, zoom: sentry_camera_zoom_e): void;

    /**
     * set camera white balance.
     * @param id Sentry id
     * @param wb white balance type.
     */
    //% blockId=cameraSetAwb shim=Sentry::cameraSetAwb
    function cameraSetAwb(id: SentryId, wb: sentry_camera_white_balance_e): void;

    /**
     * set camera FPS.
     * @param id Sentry id
     * @param on FPS type.
     */
    //% blockId=cameraSetFPS shim=Sentry::cameraSetFPS
    function cameraSetFPS(id: SentryId, on: boolean): void;

    /**
     * get vision result data, this function will update vision result automatically.
     * @param id Sentry id
     * @param vision_type: vision type.
     * @param object_inf:  object information
     */
    //% blockId=getValue shim=Sentry::getValue
    function getValue(id: SentryId, vision_type: sentry_vision_e, object_inf: sentry_obj_info_e): int32;
}

// Auto-generated. Do not edit. Really.
