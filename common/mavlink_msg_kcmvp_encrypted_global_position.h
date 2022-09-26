#pragma once
// MESSAGE KCMVP_ENCRYPTED_GLOBAL_POSITION PACKING

#define MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION 205


typedef struct __mavlink_kcmvp_encrypted_global_position_t {
 uint8_t sysid; /*<  GLOBAL_POSITION_INT MESSAGE COMPID*/
 uint8_t compid; /*<  GLOBAL_POSITION_INT MESSAGE SYSID*/
 uint8_t encrypted_position[28]; /*<  encrypted position data*/
 uint8_t counter_array[16]; /*<  encrypt counter array*/
} mavlink_kcmvp_encrypted_global_position_t;

#define MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN 46
#define MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN 46
#define MAVLINK_MSG_ID_205_LEN 46
#define MAVLINK_MSG_ID_205_MIN_LEN 46

#define MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC 33
#define MAVLINK_MSG_ID_205_CRC 33

#define MAVLINK_MSG_KCMVP_ENCRYPTED_GLOBAL_POSITION_FIELD_ENCRYPTED_POSITION_LEN 28
#define MAVLINK_MSG_KCMVP_ENCRYPTED_GLOBAL_POSITION_FIELD_COUNTER_ARRAY_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KCMVP_ENCRYPTED_GLOBAL_POSITION { \
    205, \
    "KCMVP_ENCRYPTED_GLOBAL_POSITION", \
    4, \
    {  { "sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_encrypted_global_position_t, sysid) }, \
         { "compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_encrypted_global_position_t, compid) }, \
         { "encrypted_position", NULL, MAVLINK_TYPE_UINT8_T, 28, 2, offsetof(mavlink_kcmvp_encrypted_global_position_t, encrypted_position) }, \
         { "counter_array", NULL, MAVLINK_TYPE_UINT8_T, 16, 30, offsetof(mavlink_kcmvp_encrypted_global_position_t, counter_array) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KCMVP_ENCRYPTED_GLOBAL_POSITION { \
    "KCMVP_ENCRYPTED_GLOBAL_POSITION", \
    4, \
    {  { "sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_encrypted_global_position_t, sysid) }, \
         { "compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_encrypted_global_position_t, compid) }, \
         { "encrypted_position", NULL, MAVLINK_TYPE_UINT8_T, 28, 2, offsetof(mavlink_kcmvp_encrypted_global_position_t, encrypted_position) }, \
         { "counter_array", NULL, MAVLINK_TYPE_UINT8_T, 16, 30, offsetof(mavlink_kcmvp_encrypted_global_position_t, counter_array) }, \
         } \
}
#endif

/**
 * @brief Pack a kcmvp_encrypted_global_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param sysid  GLOBAL_POSITION_INT MESSAGE COMPID
 * @param compid  GLOBAL_POSITION_INT MESSAGE SYSID
 * @param encrypted_position  encrypted position data
 * @param counter_array  encrypt counter array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t sysid, uint8_t compid, const uint8_t *encrypted_position, const uint8_t *counter_array)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, sysid);
    _mav_put_uint8_t(buf, 1, compid);
    _mav_put_uint8_t_array(buf, 2, encrypted_position, 28);
    _mav_put_uint8_t_array(buf, 30, counter_array, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN);
#else
    mavlink_kcmvp_encrypted_global_position_t packet;
    packet.sysid = sysid;
    packet.compid = compid;
    mav_array_memcpy(packet.encrypted_position, encrypted_position, sizeof(uint8_t)*28);
    mav_array_memcpy(packet.counter_array, counter_array, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
}

/**
 * @brief Pack a kcmvp_encrypted_global_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sysid  GLOBAL_POSITION_INT MESSAGE COMPID
 * @param compid  GLOBAL_POSITION_INT MESSAGE SYSID
 * @param encrypted_position  encrypted position data
 * @param counter_array  encrypt counter array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t sysid,uint8_t compid,const uint8_t *encrypted_position,const uint8_t *counter_array)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, sysid);
    _mav_put_uint8_t(buf, 1, compid);
    _mav_put_uint8_t_array(buf, 2, encrypted_position, 28);
    _mav_put_uint8_t_array(buf, 30, counter_array, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN);
#else
    mavlink_kcmvp_encrypted_global_position_t packet;
    packet.sysid = sysid;
    packet.compid = compid;
    mav_array_memcpy(packet.encrypted_position, encrypted_position, sizeof(uint8_t)*28);
    mav_array_memcpy(packet.counter_array, counter_array, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
}

/**
 * @brief Encode a kcmvp_encrypted_global_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_encrypted_global_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kcmvp_encrypted_global_position_t* kcmvp_encrypted_global_position)
{
    return mavlink_msg_kcmvp_encrypted_global_position_pack(system_id, component_id, msg, kcmvp_encrypted_global_position->sysid, kcmvp_encrypted_global_position->compid, kcmvp_encrypted_global_position->encrypted_position, kcmvp_encrypted_global_position->counter_array);
}

/**
 * @brief Encode a kcmvp_encrypted_global_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_encrypted_global_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kcmvp_encrypted_global_position_t* kcmvp_encrypted_global_position)
{
    return mavlink_msg_kcmvp_encrypted_global_position_pack_chan(system_id, component_id, chan, msg, kcmvp_encrypted_global_position->sysid, kcmvp_encrypted_global_position->compid, kcmvp_encrypted_global_position->encrypted_position, kcmvp_encrypted_global_position->counter_array);
}

/**
 * @brief Send a kcmvp_encrypted_global_position message
 * @param chan MAVLink channel to send the message
 *
 * @param sysid  GLOBAL_POSITION_INT MESSAGE COMPID
 * @param compid  GLOBAL_POSITION_INT MESSAGE SYSID
 * @param encrypted_position  encrypted position data
 * @param counter_array  encrypt counter array
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kcmvp_encrypted_global_position_send(mavlink_channel_t chan, uint8_t sysid, uint8_t compid, const uint8_t *encrypted_position, const uint8_t *counter_array)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, sysid);
    _mav_put_uint8_t(buf, 1, compid);
    _mav_put_uint8_t_array(buf, 2, encrypted_position, 28);
    _mav_put_uint8_t_array(buf, 30, counter_array, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION, buf, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
#else
    mavlink_kcmvp_encrypted_global_position_t packet;
    packet.sysid = sysid;
    packet.compid = compid;
    mav_array_memcpy(packet.encrypted_position, encrypted_position, sizeof(uint8_t)*28);
    mav_array_memcpy(packet.counter_array, counter_array, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION, (const char *)&packet, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
#endif
}

/**
 * @brief Send a kcmvp_encrypted_global_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kcmvp_encrypted_global_position_send_struct(mavlink_channel_t chan, const mavlink_kcmvp_encrypted_global_position_t* kcmvp_encrypted_global_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kcmvp_encrypted_global_position_send(chan, kcmvp_encrypted_global_position->sysid, kcmvp_encrypted_global_position->compid, kcmvp_encrypted_global_position->encrypted_position, kcmvp_encrypted_global_position->counter_array);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION, (const char *)kcmvp_encrypted_global_position, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kcmvp_encrypted_global_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t sysid, uint8_t compid, const uint8_t *encrypted_position, const uint8_t *counter_array)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, sysid);
    _mav_put_uint8_t(buf, 1, compid);
    _mav_put_uint8_t_array(buf, 2, encrypted_position, 28);
    _mav_put_uint8_t_array(buf, 30, counter_array, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION, buf, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
#else
    mavlink_kcmvp_encrypted_global_position_t *packet = (mavlink_kcmvp_encrypted_global_position_t *)msgbuf;
    packet->sysid = sysid;
    packet->compid = compid;
    mav_array_memcpy(packet->encrypted_position, encrypted_position, sizeof(uint8_t)*28);
    mav_array_memcpy(packet->counter_array, counter_array, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION, (const char *)packet, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE KCMVP_ENCRYPTED_GLOBAL_POSITION UNPACKING


/**
 * @brief Get field sysid from kcmvp_encrypted_global_position message
 *
 * @return  GLOBAL_POSITION_INT MESSAGE COMPID
 */
static inline uint8_t mavlink_msg_kcmvp_encrypted_global_position_get_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field compid from kcmvp_encrypted_global_position message
 *
 * @return  GLOBAL_POSITION_INT MESSAGE SYSID
 */
static inline uint8_t mavlink_msg_kcmvp_encrypted_global_position_get_compid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field encrypted_position from kcmvp_encrypted_global_position message
 *
 * @return  encrypted position data
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_get_encrypted_position(const mavlink_message_t* msg, uint8_t *encrypted_position)
{
    return _MAV_RETURN_uint8_t_array(msg, encrypted_position, 28,  2);
}

/**
 * @brief Get field counter_array from kcmvp_encrypted_global_position message
 *
 * @return  encrypt counter array
 */
static inline uint16_t mavlink_msg_kcmvp_encrypted_global_position_get_counter_array(const mavlink_message_t* msg, uint8_t *counter_array)
{
    return _MAV_RETURN_uint8_t_array(msg, counter_array, 16,  30);
}

/**
 * @brief Decode a kcmvp_encrypted_global_position message into a struct
 *
 * @param msg The message to decode
 * @param kcmvp_encrypted_global_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_kcmvp_encrypted_global_position_decode(const mavlink_message_t* msg, mavlink_kcmvp_encrypted_global_position_t* kcmvp_encrypted_global_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kcmvp_encrypted_global_position->sysid = mavlink_msg_kcmvp_encrypted_global_position_get_sysid(msg);
    kcmvp_encrypted_global_position->compid = mavlink_msg_kcmvp_encrypted_global_position_get_compid(msg);
    mavlink_msg_kcmvp_encrypted_global_position_get_encrypted_position(msg, kcmvp_encrypted_global_position->encrypted_position);
    mavlink_msg_kcmvp_encrypted_global_position_get_counter_array(msg, kcmvp_encrypted_global_position->counter_array);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN? msg->len : MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN;
        memset(kcmvp_encrypted_global_position, 0, MAVLINK_MSG_ID_KCMVP_ENCRYPTED_GLOBAL_POSITION_LEN);
    memcpy(kcmvp_encrypted_global_position, _MAV_PAYLOAD(msg), len);
#endif
}
