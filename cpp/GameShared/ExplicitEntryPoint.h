// Object: ExplicitEntryPoint
// RuntimeId: 49381
// TypeInfo: 0x0000000144E854C0
#pragma pack(push, 16)
namespace GameShared {
    struct ExplicitEntryPoint {
        char pad_0x0[0x20];
    }; // 0x20
    static_assert(sizeof(ExplicitEntryPoint) == 0x20);
}
#pragma pack(pop)