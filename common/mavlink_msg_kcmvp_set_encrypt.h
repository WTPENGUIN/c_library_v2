#pragma once
// MESSAGE KCMVP_SET_ENCRYPT PACKING

#define MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT 202


typedef struct __mavlink_kcmvp_set_encrypt_t {
 uint8_t algorithm_type; /*<  Algorithm Type.*/
 uint8_t key_index; /*<  Key Index.*/
} mavlink_kcmvp_set_encrypt_t;

#define MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN 2
#define MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN 2
#define MAVLINK_MSG_ID_202_LEN 2
#define MAVLINK_MSG_ID_202_MIN_LEN 2

#define MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC 123
#define MAVLINK_MSG_ID_202_CRC 123



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KCMVP_SET_ENCRYPT { \
    202, \
    "KCMVP_SET_ENCRYPT", \
    2, \
    {  { "algorithm_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_set_encrypt_t, algorithm_type) }, \
         { "key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_set_encrypt_t, key_index) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KCMVP_SET_ENCRYPT { \
    "KCMVP_SET_ENCRYPT", \
    2, \
    {  { "algorithm_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_set_encrypt_t, algorithm_type) }, \
         { "key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kcmvp_set_encrypt_t, key_index) }, \
         } \
}
#endif

/**
 * @brief Pack a kcmvp_set_encrypt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param algorithm_type  Algorithm Type.
 * @param key_index  Key Index.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_set_encrypt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t algorithm_type, uint8_t key_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN];
    _mav_put_uint8_t(buf, 0, algorithm_type);
    _mav_put_uint8_t(buf, 1, key_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN);
#else
    mavlink_kcmvp_set_encrypt_t packet;
    packet.algorithm_type = algorithm_type;
    packet.key_index = key_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
}

/**
 * @brief Pack a kcmvp_set_encrypt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param algorithm_type  Algorithm Type.
 * @param key_index  Key Index.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_set_encrypt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t algorithm_type,uint8_t key_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN];
    _mav_put_uint8_t(buf, 0, algorithm_type);
    _mav_put_uint8_t(buf, 1, key_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN);
#else
    mavlink_kcmvp_set_encrypt_t packet;
    packet.algorithm_type = algorithm_type;
    packet.key_index = key_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
}

/**
 * @brief Encode a kcmvp_set_encrypt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_set_encrypt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_set_encrypt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kcmvp_set_encrypt_t* kcmvp_set_encrypt)
{
    return mavlink_msg_kcmvp_set_encrypt_pack(system_id, component_id, msg, kcmvp_set_encrypt->algorithm_type, kcmvp_set_encrypt->key_index);
}

/**
 * @brief Encode a kcmvp_set_encrypt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_set_encrypt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_set_encrypt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kcmvp_set_encrypt_t* kcmvp_set_encrypt)
{
    return mavlink_msg_kcmvp_set_encrypt_pack_chan(system_id, component_id, chan, msg, kcmvp_set_encrypt->algorithm_type, kcmvp_set_encrypt->key_index);
}

/**
 * @brief Send a kcmvp_set_encrypt message
 * @param chan MAVLink channel to send the message
 *
 * @param algorithm_type  Algorithm Type.
 * @param key_index  Key Index.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kcmvp_set_encrypt_send(mavlink_channel_t chan, uint8_t algorithm_type, uint8_t key_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN];
    _mav_put_uint8_t(buf, 0, algorithm_type);
    _mav_put_uint8_t(buf, 1, key_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT, buf, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
#else
    mavlink_kcmvp_set_encrypt_t packet;
    packet.algorithm_type = algorithm_type;
    packet.key_index = key_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT, (const char *)&packet, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
#endif
}

/**
 * @brief Send a kcmvp_set_encrypt message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kcmvp_set_encrypt_send_struct(mavlink_channel_t chan, const mavlink_kcmvp_set_encrypt_t* kcmvp_set_encrypt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kcmvp_set_encrypt_send(chan, kcmvp_set_encrypt->algorithm_type, kcmvp_set_encrypt->key_index);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT, (const char *)kcmvp_set_encrypt, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
#endif
}

#if MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kcmvp_set_encrypt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t algorithm_type, uint8_t key_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, algorithm_type);
    _mav_put_uint8_t(buf, 1, key_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT, buf, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
#else
    mavlink_kcmvp_set_encrypt_t *packet = (mavlink_kcmvp_set_encrypt_t *)msgbuf;
    packet->algorithm_type = algorithm_type;
    packet->key_index = key_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT, (const char *)packet, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_MIN_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_CRC);
#endif
}
#endif

#endif

// MESSAGE KCMVP_SET_ENCRYPT UNPACKING


/**
 * @brief Get field algorithm_type from kcmvp_set_encrypt message
 *
 * @return  Algorithm Type.
 */
static inline uint8_t mavlink_msg_kcmvp_set_encrypt_get_algorithm_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field key_index from kcmvp_set_encrypt message
 *
 * @return  Key Index.
 */
static inline uint8_t mavlink_msg_kcmvp_set_encrypt_get_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a kcmvp_set_encrypt message into a struct
 *
 * @param msg The message to decode
 * @param kcmvp_set_encrypt C-struct to decode the message contents into
 */
static inline void mavlink_msg_kcmvp_set_encrypt_decode(const mavlink_message_t* msg, mavlink_kcmvp_set_encrypt_t* kcmvp_set_encrypt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kcmvp_set_encrypt->algorithm_type = mavlink_msg_kcmvp_set_encrypt_get_algorithm_type(msg);
    kcmvp_set_encrypt->key_index = mavlink_msg_kcmvp_set_encrypt_get_key_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN? msg->len : MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN;
        memset(kcmvp_set_encrypt, 0, MAVLINK_MSG_ID_KCMVP_SET_ENCRYPT_LEN);
    memcpy(kcmvp_set_encrypt, _MAV_PAYLOAD(msg), len);
#endif
}
