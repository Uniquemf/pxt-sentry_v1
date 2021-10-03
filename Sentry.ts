
//% color="#ff6600" weight=20 icon="\uf085"
namespace Sentry {
    /**
 * Initialize Sentry.
 */
    //% blockId=Sentry_begin block="initialize%id|port%port"
    //% group="Settings"
    export function Sentrybegin(id: SentryId, port: sentry_mode_e) {
        Sentry.begin(id,port);
    }

    /**
     * Reset Sentry.
     */
    //% blockId=Sentry_set_default block="%id|restore default settings"
    //% group="Settings"
    export function SentrysetDefault(id:SentryId ) {

    }

    /**
 * Sentry vision begin.
 */
    //% blockId=Sentry_vision_begin block="%id|%enable|algorithm%type"
    //% group="Settings"
    export function SentryvisionBegin(id: SentryId, status: SentryStatus, type: sentry_vision_e) {

    }

    /**
    * set led color.
    * @param id Sentry id
    * @param led led type.
    * @param detected_color led color while sensor detected target.
    * @param undetected_color led color while sensor undetected target.
    */
    //% blockId=Sentry_led_set_color block="%id|LED %led|when detected %detected_color|when undetected %undetected_color"
    //% weight=200 inlineInputMode=inline
    //% group="Settings" advanced=true
    export function SentryledSetColor(id: SentryId, led: sentry_led_e, detected_color: sentry_led_color_e, undetected_color: sentry_led_color_e) {

    }

    /**
     * set camera zoom.
     * @param id Sentry id
     * @param zoom zoom value.
     */
    //% blockId=Sentry_camera_set_zoom block="%id|digital zoom%level"
    //% group="Settings" advanced=true
    export function SentrycameraSetZoom(id: SentryId, zoom: sentry_camera_zoom_e) {

    }

    /**
* set camera white balance.
* @param id Sentry id
* @param wb white balance type.
*/
    //% blockId=Sentry_camera_set_awb block="%id|white balance%wb"
    //% group="Settings" advanced=true
    export function SentrycameraSetAwb(id: SentryId, wb: sentry_camera_white_balance_e) {

    }

    /**
     * set camera FPS.
     * @param id Sentry id
     * @param on FPS type.
     */
    //% blockId=Sentry_camera_set_fps block="%id|high FPS mode$on"
    //% on.shadow="toggleOnOff" on.defl="true"
    //% group="Settings" advanced=true
    export function SentrycameraSetFPS(id: SentryId, on: boolean) {

    }

    /**
* get vision result data, this function will update vision result automatically.
* @param id Sentry id
* @param vision_type: vision type.
* @param object_inf:  object information
*/
    //% blockId=Sentry_get_value
    export function SentrygetValue(id: SentryId, vision_type: sentry_vision_e, object_inf: sentry_obj_info_e) {

    }

}