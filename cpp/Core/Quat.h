// Object: Quat
// RuntimeId: 43794
// TypeInfo: 0x00000001443D03F0
#pragma pack(push, 16)
namespace Core {
    struct Quat {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(Quat) == 0x10);
}
#pragma pack(pop)