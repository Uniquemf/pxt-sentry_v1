enum sentry_vision_e {
    //% block="Color"
    kVisionColor = 1,
    //% block="Blob"
    kVisionBlob = 2,
    //% block="AprilTag"
    kVisionAprilTag = 3,
    //% block="Line"
    kVisionLine = 4,
    //% block="Body"
    kVisionBody = 5,
    //% block="Card"
    kVisionCard = 6,
    //% block="Face"
    kVisionFace = 7,
    //% block="20Classes"
    kVision20Classes = 8,
    //% block="QrCode"
    kVisionQrCode = 9,
    //% block="Track"
    kVisionObjTrack = 10,
    //% block="MotionDetect"
    kVisionMotionDetect = 11
}

//% color="#ff6600" weight=20 icon="\uf085"
namespace Sentry {

    //% block="map $value|from low $fromLow|high $fromHigh|to low $toLow|high $toHigh"
    export function mapBig(value: number,
        fromLow: number, fromHigh: number,
        toLow: number, toHigh: number): number {

        return ((value - fromLow) * (toHigh - toLow))
            / (fromHigh - fromLow) + toLow;
    }
}