#pragma once
// MESSAGE KCMVP_ENCRYPT_MODE_ON_OFF PACKING

#define MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF 203


typedef struct __mavlink_kcmvp_encrypt_mode_on_off_t {
 uint8_t kcmvp_encrypt_mode_on; /*<  encrypt mode on*/
 uint8_t kcmvp_encrypt_mode_off; /*<  encrypt mode off*/
} mavlink_kcmvp_encrypt_mode_on_off_t;

#define MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN 2
#define MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN 2
#define MAVLINK_MSG_ID_203_LEN 2
#define MAVLINK_MSG_ID_203_MIN_LEN 2

#define MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC 79
#define MAVLINK_MSG_ID_203_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KCMVP_ENCRYPT_MODE_ON_OFF { \
    203, \
    "KCMVP_ENCRYPT_MODE_ON_OFF", \
    2, \
    {  { "kcmvp_encrypt_mode_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_encrypt_mode_on_off_t, kcmvp_encrypt_mode_on) }, \
         { "kcmvp_encrypt_mode_off", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_encrypt_mode_on_off_t, kcmvp_encrypt_mode_off) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KCMVP_ENCRYPT_MODE_ON_OFF { \
    "KCMVP_ENCRYPT_MODE_ON_OFF", \
    2, \
    {  { "kcmvp_encrypt_mode_on", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_encrypt_mode_on_off_t, kcmvp_encrypt_mode_on) }, \
         { "kcmvp_encrypt_mode_off", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_encrypt_mode_on_off_t, kcmvp_encrypt_mode_off) }, \
         } \
}
#endif

/**
 * @brief Pack a kcmvp_encrypt_mode_on_off message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param kcmvp_encrypt_mode_on  encrypt mode on
 * @param kcmvp_encrypt_mode_off  encrypt mode off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_encrypt_mode_on_off_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t kcmvp_encrypt_mode_on, uint8_t kcmvp_encrypt_mode_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN];
    _mav_put_uint8_t(buf, 0, kcmvp_encrypt_mode_on);
    _mav_put_uint8_t(buf, 1, kcmvp_encrypt_mode_off);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN);
#else
    mavlink_kcmvp_encrypt_mode_on_off_t packet;
    packet.kcmvp_encrypt_mode_on = kcmvp_encrypt_mode_on;
    packet.kcmvp_encrypt_mode_off = kcmvp_encrypt_mode_off;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
}

/**
 * @brief Pack a kcmvp_encrypt_mode_on_off message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_encrypt_mode_on  encrypt mode on
 * @param kcmvp_encrypt_mode_off  encrypt mode off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_encrypt_mode_on_off_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t kcmvp_encrypt_mode_on,uint8_t kcmvp_encrypt_mode_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN];
    _mav_put_uint8_t(buf, 0, kcmvp_encrypt_mode_on);
    _mav_put_uint8_t(buf, 1, kcmvp_encrypt_mode_off);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN);
#else
    mavlink_kcmvp_encrypt_mode_on_off_t packet;
    packet.kcmvp_encrypt_mode_on = kcmvp_encrypt_mode_on;
    packet.kcmvp_encrypt_mode_off = kcmvp_encrypt_mode_off;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
}

/**
 * @brief Encode a kcmvp_encrypt_mode_on_off struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_encrypt_mode_on_off C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_encrypt_mode_on_off_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kcmvp_encrypt_mode_on_off_t* kcmvp_encrypt_mode_on_off)
{
    return mavlink_msg_kcmvp_encrypt_mode_on_off_pack(system_id, component_id, msg, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_on, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_off);
}

/**
 * @brief Encode a kcmvp_encrypt_mode_on_off struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_encrypt_mode_on_off C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_encrypt_mode_on_off_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kcmvp_encrypt_mode_on_off_t* kcmvp_encrypt_mode_on_off)
{
    return mavlink_msg_kcmvp_encrypt_mode_on_off_pack_chan(system_id, component_id, chan, msg, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_on, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_off);
}

/**
 * @brief Send a kcmvp_encrypt_mode_on_off message
 * @param chan MAVLink channel to send the message
 *
 * @param kcmvp_encrypt_mode_on  encrypt mode on
 * @param kcmvp_encrypt_mode_off  encrypt mode off
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kcmvp_encrypt_mode_on_off_send(mavlink_channel_t chan, uint8_t kcmvp_encrypt_mode_on, uint8_t kcmvp_encrypt_mode_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN];
    _mav_put_uint8_t(buf, 0, kcmvp_encrypt_mode_on);
    _mav_put_uint8_t(buf, 1, kcmvp_encrypt_mode_off);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF, buf, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
#else
    mavlink_kcmvp_encrypt_mode_on_off_t packet;
    packet.kcmvp_encrypt_mode_on = kcmvp_encrypt_mode_on;
    packet.kcmvp_encrypt_mode_off = kcmvp_encrypt_mode_off;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF, (const char *)&packet, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
#endif
}

/**
 * @brief Send a kcmvp_encrypt_mode_on_off message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kcmvp_encrypt_mode_on_off_send_struct(mavlink_channel_t chan, const mavlink_kcmvp_encrypt_mode_on_off_t* kcmvp_encrypt_mode_on_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kcmvp_encrypt_mode_on_off_send(chan, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_on, kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_off);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF, (const char *)kcmvp_encrypt_mode_on_off, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
#endif
}

#if MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kcmvp_encrypt_mode_on_off_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t kcmvp_encrypt_mode_on, uint8_t kcmvp_encrypt_mode_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, kcmvp_encrypt_mode_on);
    _mav_put_uint8_t(buf, 1, kcmvp_encrypt_mode_off);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF, buf, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
#else
    mavlink_kcmvp_encrypt_mode_on_off_t *packet = (mavlink_kcmvp_encrypt_mode_on_off_t *)msgbuf;
    packet->kcmvp_encrypt_mode_on = kcmvp_encrypt_mode_on;
    packet->kcmvp_encrypt_mode_off = kcmvp_encrypt_mode_off;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF, (const char *)packet, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_CRC);
#endif
}
#endif

#endif

// MESSAGE KCMVP_ENCRYPT_MODE_ON_OFF UNPACKING


/**
 * @brief Get field kcmvp_encrypt_mode_on from kcmvp_encrypt_mode_on_off message
 *
 * @return  encrypt mode on
 */
static inline uint8_t mavlink_msg_kcmvp_encrypt_mode_on_off_get_kcmvp_encrypt_mode_on(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field kcmvp_encrypt_mode_off from kcmvp_encrypt_mode_on_off message
 *
 * @return  encrypt mode off
 */
static inline uint8_t mavlink_msg_kcmvp_encrypt_mode_on_off_get_kcmvp_encrypt_mode_off(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a kcmvp_encrypt_mode_on_off message into a struct
 *
 * @param msg The message to decode
 * @param kcmvp_encrypt_mode_on_off C-struct to decode the message contents into
 */
static inline void mavlink_msg_kcmvp_encrypt_mode_on_off_decode(const mavlink_message_t* msg, mavlink_kcmvp_encrypt_mode_on_off_t* kcmvp_encrypt_mode_on_off)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_on = mavlink_msg_kcmvp_encrypt_mode_on_off_get_kcmvp_encrypt_mode_on(msg);
    kcmvp_encrypt_mode_on_off->kcmvp_encrypt_mode_off = mavlink_msg_kcmvp_encrypt_mode_on_off_get_kcmvp_encrypt_mode_off(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN? msg->len : MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN;
        memset(kcmvp_encrypt_mode_on_off, 0, MAVLINK_MSG_ID_KCMVP_ENCRYPT_MODE_ON_OFF_LEN);
    memcpy(kcmvp_encrypt_mode_on_off, _MAV_PAYLOAD(msg), len);
#endif
}
