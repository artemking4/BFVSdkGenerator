// Object: CoreClientPreSaveMessage
// RuntimeId: 24952
// TypeInfo: 0x0000000144E49CF0
#pragma pack(push, 8)
namespace GameCommon {
    struct CoreClientPreSaveMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(CoreClientPreSaveMessage) == 0x40);
}
#pragma pack(pop)