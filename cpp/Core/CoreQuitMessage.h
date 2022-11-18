// Object: CoreQuitMessage
// RuntimeId: 20183
// TypeInfo: 0x0000000144BE3C30
#pragma pack(push, 8)
namespace Core {
    struct CoreQuitMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(CoreQuitMessage) == 0x30);
}
#pragma pack(pop)