// Object: Vec
// RuntimeId: 40716
// TypeInfo: 0x00000001443D01A0
#pragma pack(push, 16)
namespace Core {
    struct Vec {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(Vec) == 0x10);
}
#pragma pack(pop)