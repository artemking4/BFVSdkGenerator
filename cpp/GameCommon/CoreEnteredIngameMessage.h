// Object: CoreEnteredIngameMessage
// RuntimeId: 33273
// TypeInfo: 0x0000000144E4A060
#pragma pack(push, 8)
namespace GameCommon {
    struct CoreEnteredIngameMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(CoreEnteredIngameMessage) == 0x30);
}
#pragma pack(pop)