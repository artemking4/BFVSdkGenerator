// Object: PID
// RuntimeId: 10433
// TypeInfo: 0x0000000144E80B00
#pragma pack(push, 4)
namespace GameShared {
    struct PID {
        char pad_0x0[0x20];
    }; // 0x20
    static_assert(sizeof(PID) == 0x20);
}
#pragma pack(pop)