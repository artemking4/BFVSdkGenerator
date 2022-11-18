// Object: PresenceConnectionEventPayload
// RuntimeId: 40709
// TypeInfo: 0x0000000144F4F530

namespace SpartaShared {
    enum PresenceConnectionEventPayload {
        MODE_CHANGED = 0,
        DISCONNECTED = 1,
        CONNECTING = 2,
        CONNECTION_FAILED = 3,
        CONNECTION_READY = 4,
        ONLINE_FLOW_DONE = 5,
        TELEMETRY_TOKEN_RECEIVED = 6,
        FIRST_PARTY_CONNECTED = 7,
        FIRST_PARTY_DISCONNECTED = 8,
        PING_VALUE_RESOLVED = 9,
        CONNECTION_MESSAGE = 10,
        NOT_READY = 11,
        QOS_DONE = 12,
        INCORRECT_VALUE = 13
    };
}