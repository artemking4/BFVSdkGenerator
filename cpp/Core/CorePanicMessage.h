// Object: CorePanicMessage
// RuntimeId: 30253
// TypeInfo: 0x0000000144BE3BE0
#pragma pack(push, 8)
namespace Core {
    struct CorePanicMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(CorePanicMessage) == 0x30);
}
#pragma pack(pop)