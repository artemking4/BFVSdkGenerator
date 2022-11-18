// Object: ClientConnectionInitializedMessage
// RuntimeId: 19940
// TypeInfo: 0x0000000144E310A0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientConnectionInitializedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ClientConnectionInitializedMessage) == 0x38);
}
#pragma pack(pop)