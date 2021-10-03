// Copyright 2021 Tosee Intelligence (hangzhoou) co.,ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SENTRY_TYPE_H_
#define SENTRY_TYPE_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

  typedef unsigned char sentry_err_t;

#ifdef BIT
#undef BIT
#endif
#define BIT(x) (0x01 << (x))

#if !defined(SENTRY_MAX_RESULT)
#define SENTRY_MAX_RESULT 25
#endif

#define SENTRY_DEVICE_ID 0x04
#define SENTRY_FIRMWARE_VERSION 0xFF
#define visionTypeEnumToMacro(v) (BIT(v - 1))

/* Sentry error type */
#define SENTRY_OK 0x00
#define SENTRY_FAIL 0x01
#define SENTRY_WRITE_TIMEOUT 0x02
#define SENTRY_READ_TIMEOUT 0x03
#define SENTRY_CHECK_ERROR 0x04
#define SENTRY_UNSUPPORT_PARAM 0x10
#define SENTRY_UNKNOWN_PROTOCOL 0x11

  enum sentry_vision_e
  {
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
    //% block="ObjTrack"
    kVisionObjTrack = 10,
    //% block="MotionDetect"
    kVisionMotionDetect = 11
  } ;

#definde kVisionMaxType 12

  enum sentry_led_color_e
  {
    //% block="off"
    kLedClose = 0,
    //% block="red"
    kLedRed = 1,
    //% block="green"
    kLedGreen = 2,
    //% block="yellow"
    kLedYellow = 3,
    //% block="blue"
    kLedBlue = 4,
    //% block="purple"
    kLedPurple = 5,
    //% block="cyan"
    kLedCyan = 6,
    //% block="white"
    kLedWhite = 7,
  } ;

  //register address define
  typedef enum
  {
    kRegDeviceId = 0x01,
    kRegFirmwareVersion = 0x02,
    kRegRestart = 0x03,
    kRegSensorConfig1 = 0x04,
    kRegLock = 0x05,
    kRegLed1 = 0x06,
    kRegLed2 = 0x07,
    kRegLedLevel = 0x08,
    kRegUart = 0x09,
    kRegUSBCongig = 0x0B,
    kRegHWConfig = 0x0F,
    kRegCameraConfig1 = 0x10,
    kRegCameraConfig2 = 0x11,
    kRegCameraConfig3 = 0x12,
    kRegCameraConfig4 = 0x13,
    kRegCameraConfig5 = 0x14,
    kRegFrameWidthH = 0x1B,
    kRegFrameWidthL = 0x1C,
    kRegFrameHeightH = 0x1D,
    kRegFrameHeightL = 0x1E,
    kRegFrameCount = 0x1F,
    kRegVisionId = 0x20,
    kRegVisionConfig1 = 0x21,
    kRegVisionConfig2 = 0x22,
    kRegParamNum = 0x23,
    kRegParamId = 0x24,
    kRegVisionStatus1 = 0x2A,
    kRegVisionStatus2 = 0x2B,
    kRegVisionDetect1 = 0x30,
    kRegVisionDetect2 = 0x31,
    kRegResultNumber = 0x34,
    kRegResultId = 0x35,
    kRegReadStatus1 = 0x36,
    kRegParamValue1H = 0x70,
    kRegParamValue1L = 0x71,
    kRegParamValue2H = 0x72,
    kRegParamValue2L = 0x73,
    kRegParamValue3H = 0x74,
    kRegParamValue3L = 0x75,
    kRegParamValue4H = 0x76,
    kRegParamValue4L = 0x77,
    kRegParamValue5H = 0x78,
    kRegParamValue5L = 0x79,
    kRegResultData1H = 0x80,
    kRegResultData1L = 0x81,
    kRegResultData2H = 0x82,
    kRegResultData2L = 0x83,
    kRegResultData3H = 0x84,
    kRegResultData3L = 0x85,
    kRegResultData4H = 0x86,
    kRegResultData4L = 0x87,
    kRegResultData5H = 0x88,
    kRegResultData5L = 0x89,
    kRegSn = 0xD0,
  } sentry_reg_e;

  //type define

  enum sentry_led_e
  {
    //% block="1"
    kLed1,
    //% block="2"
    kLed2,
    //% block="All"
    kLedAll,
  };

  enum sentry_mode_e
  {
    //% block="SerialMode"
    kSerialMode,
    //% block="I2CMode"
    kI2CMode,
  };

  enum sentry_baudrate_e
  {
    //% block="9600"
    kBaud9600 = 0x00,
    //% block="19200"
    kBaud19200 = 0x01,
    //% block="38400"
    kBaud38400 = 0x02,
    //% block="57600"
    kBaud57600 = 0x03,
    //% block="115200"
    kBaud115200 = 0x04,
    //% block="921600"
    kBaud921600 = 0x05,
    //% block="1152000"
    kBaud1152000 = 0x06,
    //% block="2000000"
    kBaud2000000 = 0x07,
  };

  enum sentry_obj_info_e
  {
    //% block="status"
    kStatus, //!< whether the target is detected
    //% block="x position"
    kXValue, //!< target horizontal position
    //% block="y position"
    kYValue, //!< target vertical position
    //% block="width"
    kWidthValue, //!< target width
    //% block="height"
    kHeightValue, //!< target height
    //% block="label"
    kLabel, //!< target label
    //% block="red channel"
    kRValue, //!< R channel value
    //% block="green channel"
    kGValue, //!< G channel value
    //% block="blue channel"
    kBValue, //!< B channel value
  };

  // typedef enum {
  //   //!< for UART mode only
  //   kCallBackMode = 0,      //!< u need send a request first, and wait for response
  //   kDataFlowMode = 1,      //!< Sentry will automatically response the result of the vision that u enabled, whether it detected or undetected
  //   kEventMode    = 2,      //!< Sentry can only automatically response the result of the vision that u enabled, which detected target
  // } MuVsStreamOutputMode;

enum sentry_camera_zoom_e
  {
    //% block="Auto"
    kZoomDefault = 0,
    //% block="Level1"
    kZoom1 = 1,
    //% block="Level2"
    kZoom2 = 2,
    //% block="Level3"
    kZoom3 = 3,
    //% block="Level4"
    kZoom4 = 4,
    //% block="Level5"
    kZoom5 = 5,
  } ;

  enum sentry_camera_fps_e
  {
    //% block="FPSNorma"
    kFPSNormal = 0, //!< 25FPS mode
    //% block="FPSHigh"
    kFPSHigh = 1, //!< 50FPS mode
  };

  enum sentry_camera_white_balance_e
  {
    //% block="AutoWhiteBalance"
    kAutoWhiteBalance = 0, //!< auto white balance mode
    //% block="LockWhiteBalance"
    kLockWhiteBalance = 1, //!< lock white balance with current value, the entire process takes about 100ms
    //% block="WhiteLight"
    kWhiteLight = 2, //!< white light mode
    //% block="YellowLight"
    kYellowLight = 3, //!< yellow light mode
    //% block="WhiteBalanceCalibrating"
    kWhiteBalanceCalibrating,
  };

  /* register type */
  typedef union
  {
    struct
    {
      unsigned char start_up : 1;
      unsigned char auto_save : 1;
      unsigned char default_setting : 1; //!< set 1 reset all config
      unsigned char disable_vison : 1;
    };
    unsigned char sensor_config_reg_value;
  } sentry_sensor_conf_t;
  typedef union
  {
    struct
    {
      sentry_baudrate_e baudrate : 3;
    };
    unsigned char uart_reg_value;
  } sentry_uart_conf_t;
  typedef union
  {
    struct
    {
      unsigned char manual : 1;
      sentry_led_color_e detected_color : 3;
      unsigned char hold : 1;
      sentry_led_color_e undetected_color : 3;
    };
    unsigned char led_reg_value;
  } sentry_led_conf_t;
  typedef union
  {
    struct
    {
      sentry_camera_zoom_e zoom : 3;
      unsigned char rotate : 1;
      sentry_camera_fps_e fps : 1;
      sentry_camera_white_balance_e white_balance : 3;
    };
    unsigned char camera_reg_value;
  } sentry_camera_conf1_t;
  typedef union
  {
    struct
    {
      unsigned char status : 1;
      unsigned char default_setting : 1; //!< set 1 to reset vision configuration
      // MuVsStreamOutputMode output_mode :2;
      // MuVsVisionLevel level :2;
      // unsigned char reserve6 :1;
      // unsigned char output_enable :1;
    };
    unsigned char vision_config_reg_value;
  } sentry_vision_conf1_t;

  typedef struct
  {
    union
    {
      uint16_t result_data1;
      uint16_t x_value;
      uint16_t color_r_value;
      uint16_t top_x_value;
    };
    union
    {
      uint16_t result_data2;
      uint16_t y_value;
      uint16_t color_g_value;
      uint16_t top_y_value;
    };
    union
    {
      uint16_t result_data3;
      uint16_t width;
      uint16_t color_b_value;
      uint16_t bot_x_value;
    };
    union
    {
      uint16_t result_data4;
      uint16_t height;
      uint16_t bot_y_value;
    };
    union
    {
      uint16_t result_data5;
      uint16_t color;
      uint16_t label;
    };
  } sentry_object_t;

  typedef struct
  {
    uint16_t x_value;
    uint16_t y_value;
    uint16_t width;
    uint16_t height;
    uint16_t length;
    char str[20 + 1];
  } sentry_qrcode_t;

  typedef struct
  {
    unsigned char frame;
    unsigned char detect;
    sentry_object_t vision_result[SENTRY_MAX_RESULT];
  } sentry_vision_state_t;

  typedef struct
  {
    unsigned char frame;
    unsigned char detect;
    sentry_qrcode_t qrcode_result[1];
  } sentry_qrcode_state_t;

#ifdef __cplusplus
}
#endif

#endif /* SENTRY_TYPE_H_ */
