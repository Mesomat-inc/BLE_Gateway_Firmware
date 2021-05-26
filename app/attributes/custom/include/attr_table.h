/**
 * @file attr_table.h
 *
 * @brief This is generated by attribute_generator.py
 *
 * Copyright (c) 2021 Laird Connectivity
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __ATTRIBUTE_TABLE_H__
#define __ATTRIBUTE_TABLE_H__

/******************************************************************************/
/* Includes                                                                   */
/******************************************************************************/
#include <zephyr.h>
#include <zephyr/types.h>
#include <stddef.h>

#include "attr_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/* Indices                                                                    */
/******************************************************************************/

/* pystart - attribute indices */
#define ATTR_INDEX_lock                               1
#define ATTR_INDEX_loadPath                           81
/* pyend */

/* pystart - attribute ids */
#define ATTR_ID_location                              1
#define ATTR_ID_lock                                  5
#define ATTR_ID_firmwareVersion                       11
#define ATTR_ID_resetReason                           12
#define ATTR_ID_bluetoothAddress                      13
#define ATTR_ID_resetCount                            14
#define ATTR_ID_upTime                                16
#define ATTR_ID_txPower                               59
#define ATTR_ID_networkId                             60
#define ATTR_ID_configVersion                         61
#define ATTR_ID_hardwareVersion                       63
#define ATTR_ID_batteryVoltageMv                      75
#define ATTR_ID_attributeVersion                      93
#define ATTR_ID_qrtc                                  94
#define ATTR_ID_qrtcLastSet                           95
#define ATTR_ID_name                                  140
#define ATTR_ID_board                                 142
#define ATTR_ID_buildId                               143
#define ATTR_ID_appType                               144
#define ATTR_ID_mount                                 145
#define ATTR_ID_commissioned                          146
#define ATTR_ID_certStatus                            147
#define ATTR_ID_rootCaName                            148
#define ATTR_ID_clientCertName                        149
#define ATTR_ID_clientKeyName                         150
#define ATTR_ID_endpoint                              151
#define ATTR_ID_port                                  152
#define ATTR_ID_clientId                              153
#define ATTR_ID_topicPrefix                           154
#define ATTR_ID_gatewayState                          155
#define ATTR_ID_batteryCapacity                       157
#define ATTR_ID_batteryTemperature                    158
#define ATTR_ID_batteryChargingState                  159
#define ATTR_ID_batteryLowThreshold                   160
#define ATTR_ID_batteryAlarmThreshold                 161
#define ATTR_ID_battery4                              162
#define ATTR_ID_battery3                              163
#define ATTR_ID_battery2                              164
#define ATTR_ID_battery1                              165
#define ATTR_ID_battery0                              166
#define ATTR_ID_batteryAlarm                          167
#define ATTR_ID_motionOdr                             168
#define ATTR_ID_motionThresh                          169
#define ATTR_ID_motionScale                           170
#define ATTR_ID_motionDuration                        171
#define ATTR_ID_motionAlarm                           172
#define ATTR_ID_sdLogMaxSize                          173
#define ATTR_ID_ctAesKey                              174
#define ATTR_ID_powerSupplyVoltage                    175
#define ATTR_ID_gatewayId                             176
#define ATTR_ID_lteNetworkState                       177
#define ATTR_ID_lteStartupState                       178
#define ATTR_ID_lteRsrp                               179
#define ATTR_ID_lteSinr                               180
#define ATTR_ID_lteSleepState                         181
#define ATTR_ID_lteRat                                182
#define ATTR_ID_iccid                                 183
#define ATTR_ID_lteSerialNumber                       184
#define ATTR_ID_lteVersion                            185
#define ATTR_ID_bands                                 186
#define ATTR_ID_activeBands                           187
#define ATTR_ID_centralState                          188
#define ATTR_ID_sensorBluetoothAddress                189
#define ATTR_ID_joinDelay                             190
#define ATTR_ID_joinMin                               191
#define ATTR_ID_joinMax                               192
#define ATTR_ID_joinInterval                          193
#define ATTR_ID_modemBoot                             194
#define ATTR_ID_delayCloudReconnect                   195
#define ATTR_ID_apn                                   196
#define ATTR_ID_apnUsername                           197
#define ATTR_ID_apnPassword                           198
#define ATTR_ID_apnControlPoint                       199
#define ATTR_ID_apnStatus                             200
#define ATTR_ID_modemDesiredLogLevel                  201
#define ATTR_ID_lteOperatorIndex                      202
#define ATTR_ID_fotaControlPoint                      203
#define ATTR_ID_fotaStatus                            204
#define ATTR_ID_fotaFileName                          205
#define ATTR_ID_fotaSize                              206
#define ATTR_ID_fotaCount                             207
#define ATTR_ID_loadPath                              208
#define ATTR_ID_dumpPath                              209
#define ATTR_ID_nvImported                            210
#define ATTR_ID_floaty                                211
#define ATTR_ID_generatePsk                           212
#define ATTR_ID_lwm2mPsk                              213
#define ATTR_ID_lwm2mClientId                         214
#define ATTR_ID_lwm2mPeerUrl                          215
#define ATTR_ID_lteInitError                          216
#define ATTR_ID_cloudError                            217
#define ATTR_ID_commissioningBusy                     218
#define ATTR_ID_imsi                                  219
#define ATTR_ID_modemFunctionality                    220
#define ATTR_ID_ethernetInitError                     221
/* pyend */

/******************************************************************************/
/* Constants and Enumerations                                                 */
/******************************************************************************/

/* pystart - attribute constants */
#define ATTR_TABLE_SIZE                                 95
#define ATTR_TABLE_MAX_ID                               221
#define ATTR_TABLE_WRITABLE_COUNT                       43
#define ATTR_MAX_STR_LENGTH                             254
#define ATTR_MAX_STR_SIZE                               255
#define ATTR_MAX_BIN_SIZE                               16

/* Attribute Max String Lengths */
#define ATTR_LOCATION_MAX_STR_SIZE                      33
#define ATTR_FIRMWARE_VERSION_MAX_STR_SIZE              12
#define ATTR_RESET_REASON_MAX_STR_SIZE                  13
#define ATTR_BLUETOOTH_ADDRESS_MAX_STR_SIZE             13
#define ATTR_ATTRIBUTE_VERSION_MAX_STR_SIZE             12
#define ATTR_NAME_MAX_STR_SIZE                          33
#define ATTR_BOARD_MAX_STR_SIZE                         33
#define ATTR_BUILD_ID_MAX_STR_SIZE                      65
#define ATTR_APP_TYPE_MAX_STR_SIZE                      33
#define ATTR_MOUNT_MAX_STR_SIZE                         33
#define ATTR_ROOT_CA_NAME_MAX_STR_SIZE                  49
#define ATTR_CLIENT_CERT_NAME_MAX_STR_SIZE              49
#define ATTR_CLIENT_KEY_NAME_MAX_STR_SIZE               49
#define ATTR_ENDPOINT_MAX_STR_SIZE                      255
#define ATTR_PORT_MAX_STR_SIZE                          17
#define ATTR_CLIENT_ID_MAX_STR_SIZE                     33
#define ATTR_TOPIC_PREFIX_MAX_STR_SIZE                  33
#define ATTR_GATEWAY_ID_MAX_STR_SIZE                    16
#define ATTR_ICCID_MAX_STR_SIZE                         21
#define ATTR_LTE_SERIAL_NUMBER_MAX_STR_SIZE             15
#define ATTR_LTE_VERSION_MAX_STR_SIZE                   30
#define ATTR_BANDS_MAX_STR_SIZE                         21
#define ATTR_ACTIVE_BANDS_MAX_STR_SIZE                  21
#define ATTR_SENSOR_BLUETOOTH_ADDRESS_MAX_STR_SIZE      31
#define ATTR_APN_MAX_STR_SIZE                           65
#define ATTR_APN_USERNAME_MAX_STR_SIZE                  66
#define ATTR_APN_PASSWORD_MAX_STR_SIZE                  66
#define ATTR_FOTA_FILE_NAME_MAX_STR_SIZE                65
#define ATTR_LOAD_PATH_MAX_STR_SIZE                     33
#define ATTR_DUMP_PATH_MAX_STR_SIZE                     33
#define ATTR_LWM2M_CLIENT_ID_MAX_STR_SIZE               33
#define ATTR_LWM2M_PEER_URL_MAX_STR_SIZE                129
#define ATTR_IMSI_MAX_STR_SIZE                          16

/* Attribute Byte Array Lengths */
#define ATTR_CT_AES_KEY_SIZE                            16
#define ATTR_LWM2M_PSK_SIZE                             16
/* pyend */

/* pystart - enumerations */
enum cert_status {
	CERT_STATUS_BUSY = 1,
	CERT_STATUS_SUCCESS = 0,
	CERT_STATUS_EPERM = -1,
};

enum gateway_state {
	GATEWAY_STATE_POWER_UP_INIT = 0,
	GATEWAY_STATE_NETWORK_INIT = 1,
	GATEWAY_STATE_WAIT_FOR_NETWORK = 2,
	GATEWAY_STATE_NETWORK_CONNECTED = 3,
	GATEWAY_STATE_NETWORK_DISCONNECTED = 4,
	GATEWAY_STATE_NETWORK_ERROR = 5,
	GATEWAY_STATE_WAIT_FOR_COMMISSION = 6,
	GATEWAY_STATE_RESOLVE_SERVER = 7,
	GATEWAY_STATE_WAIT_BEFORE_CLOUD_CONNECT = 8,
	GATEWAY_STATE_CLOUD_CONNECTED = 9,
	GATEWAY_STATE_CLOUD_WAIT_FOR_DISCONNECT = 10,
	GATEWAY_STATE_CLOUD_DISCONNECTED = 11,
	GATEWAY_STATE_CLOUD_ERROR = 12,
	GATEWAY_STATE_FOTA_BUSY  = 13,
	GATEWAY_STATE_DECOMMISSION = 14,
	GATEWAY_STATE_CLOUD_REQUEST_DISCONNECT = 15,
	GATEWAY_STATE_CLOUD_CONNECTING = 16,
	GATEWAY_STATE_MODEM_INIT = 17,
	GATEWAY_STATE_MODEM_ERROR = 18,
};

enum lte_network_state {
	LTE_NETWORK_STATE_NOT_REGISTERED = 0,
	LTE_NETWORK_STATE_HOME_NETWORK = 1,
	LTE_NETWORK_STATE_SEARCHING = 2,
	LTE_NETWORK_STATE_REGISTRATION_DENIED = 3,
	LTE_NETWORK_STATE_OUT_OF_COVERAGE = 4,
	LTE_NETWORK_STATE_ROAMING = 5,
	LTE_NETWORK_STATE_EMERGENCY = 8,
	LTE_NETWORK_STATE_UNABLE_TO_CONFIGURE = 240,
};

enum lte_startup_state {
	LTE_STARTUP_STATE_READY = 0,
	LTE_STARTUP_STATE_WAITING_FOR_ACCESS_CODE = 1,
	LTE_STARTUP_STATE_SIM_NOT_PRESENT = 2,
	LTE_STARTUP_STATE_SIM_LOCK = 3,
	LTE_STARTUP_STATE_UNRECOVERABLE_ERROR = 4,
	LTE_STARTUP_STATE_UNKNOWN = 5,
	LTE_STARTUP_STATE_INACTIVE_SIM = 6,
};

enum lte_sleep_state {
	LTE_SLEEP_STATE_UNINITIALIZED = 0,
	LTE_SLEEP_STATE_ASLEEP = 1,
	LTE_SLEEP_STATE_AWAKE = 2,
};

enum central_state {
	CENTRAL_STATE_FINDING_DEVICE = 0,
	CENTRAL_STATE_FINDING_SERVICE = 1,
	CENTRAL_STATE_FINDING_ESS_TEMPERATURE_CHAR = 2,
	CENTRAL_STATE_FINDING_ESS_HUMIDITY_CHAR = 3,
	CENTRAL_STATE_FINDING_ESS_PRESSURE_CHAR = 4,
	CENTRAL_STATE_CONNECTED_AND_CONFIGURED = 5,
	CENTRAL_STATE_FINDING_SMP_CHAR = 6,
	CENTRAL_STATE_CHALLENGE_REQUEST = 7,
	CENTRAL_STATE_CHALLENGE_RESPONSE = 8,
	CENTRAL_STATE_LOG_DOWNLOAD = 9,
};

enum modem_boot {
	MODEM_BOOT_NORMAL = 0,
	MODEM_BOOT_DELAYED = 1,
	MODEM_BOOT_AIRPLANE = 2,
};

enum fota_control_point {
	FOTA_CONTROL_POINT_NOP = 0,
	FOTA_CONTROL_POINT_MODEM_START = 2,
};

enum fota_status {
	FOTA_STATUS_SUCCESS = 0,
	FOTA_STATUS_BUSY = 1,
	FOTA_STATUS_ERROR = 2,
};

enum generate_psk {
	GENERATE_PSK_LWM2M_DEFAULT = 0,
	GENERATE_PSK_LWM2M_RANDOM = 1,
};

enum lte_init_error {
	LTE_INIT_ERROR_NONE = 0,
	LTE_INIT_ERROR_NO_IFACE = -1,
	LTE_INIT_ERROR_IFACE_CFG = -2,
	LTE_INIT_ERROR_DNS_CFG = -3,
	LTE_INIT_ERROR_MODEM = -4,
	LTE_INIT_ERROR_AIRPLANE = -5,
};

enum cloud_error {
	CLOUD_ERROR_NONE = 0,
	CLOUD_ERROR_INIT_ENDPOINT = -1,
	CLOUD_ERROR_INIT_CLIENT_ID = -2,
	CLOUD_ERROR_INIT_ROOT_CA = -3,
	CLOUD_ERROR_READ_CRED_FS = -4,
	CLOUD_ERROR_CRED_SIZE = -5,
	CLOUD_ERROR_INIT_TOPIC_PREFIX = -6,
	CLOUD_ERROR_INIT_CLIENT_CERT = -7,
	CLOUD_ERROR_INIT_CLIENT_KEY = -8,
};

enum modem_functionality {
	MODEM_FUNCTIONALITY_ERRNO = -1,
	MODEM_FUNCTIONALITY_MINIMUM = 0,
	MODEM_FUNCTIONALITY_FULL = 1,
	MODEM_FUNCTIONALITY_AIRPLANE = 4,
};

enum ethernet_init_error {
	ETHERNET_INIT_ERROR_NONE = 0,
	ETHERNET_INIT_ERROR_NO_IFACE = -1,
	ETHERNET_INIT_ERROR_IFACE_CFG = -2,
	ETHERNET_INIT_ERROR_DNS_CFG = -3,
};

enum attr_dump {
	ATTR_DUMP_RW = 0,
	ATTR_DUMP_W = 1,
	ATTR_DUMP_RO = 2,
};

/* pyend */

/* pystart - enum size check */
BUILD_ASSERT(sizeof(enum cert_status) == ATTR_SIZE_S8);
BUILD_ASSERT(sizeof(enum gateway_state) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum lte_network_state) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum lte_startup_state) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum lte_sleep_state) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum central_state) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum modem_boot) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum fota_control_point) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum fota_status) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum generate_psk) == ATTR_SIZE_U8);
BUILD_ASSERT(sizeof(enum lte_init_error) == ATTR_SIZE_S8);
BUILD_ASSERT(sizeof(enum cloud_error) == ATTR_SIZE_S8);
BUILD_ASSERT(sizeof(enum modem_functionality) == ATTR_SIZE_S8);
BUILD_ASSERT(sizeof(enum ethernet_init_error) == ATTR_SIZE_S8);
/* pyend */

/******************************************************************************/
/* Global Function Prototypes                                                 */
/******************************************************************************/
/* The weak implementations should be overridden in application. */
/* pystart - prepare for read */
int attr_prepare_upTime(void);
int attr_prepare_batteryVoltageMv(void);
int attr_prepare_qrtc(void);
int attr_prepare_qrtcLastSet(void);
int attr_prepare_modemBoot(void);
int attr_prepare_modemFunctionality(void);
/* pyend */

/* pystart - get string */
const char *const attr_get_string_cert_status(int value);
const char *const attr_get_string_gateway_state(int value);
const char *const attr_get_string_lte_network_state(int value);
const char *const attr_get_string_lte_startup_state(int value);
const char *const attr_get_string_lte_sleep_state(int value);
const char *const attr_get_string_central_state(int value);
const char *const attr_get_string_modem_boot(int value);
const char *const attr_get_string_fota_control_point(int value);
const char *const attr_get_string_fota_status(int value);
const char *const attr_get_string_generate_psk(int value);
const char *const attr_get_string_lte_init_error(int value);
const char *const attr_get_string_cloud_error(int value);
const char *const attr_get_string_modem_functionality(int value);
const char *const attr_get_string_ethernet_init_error(int value);
/* pyend */

#ifdef __cplusplus
}
#endif

#endif /* __ATTRIBUTE_TABLE_H__ */
