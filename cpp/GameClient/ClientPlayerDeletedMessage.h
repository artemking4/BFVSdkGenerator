// Object: ClientPlayerDeletedMessage
// RuntimeId: 4283
// TypeInfo: 0x0000000144E31EB0
#pragma pack(push, 8)
namespace GameClient {
    struct ClientPlayerDeletedMessage {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(ClientPlayerDeletedMessage) == 0x38);
}
#pragma pack(pop)