// Object: CoreCleanupMessage
// RuntimeId: 55326
// TypeInfo: 0x0000000144BE3B40
#pragma pack(push, 8)
namespace Core {
    struct CoreCleanupMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(CoreCleanupMessage) == 0x30);
}
#pragma pack(pop)