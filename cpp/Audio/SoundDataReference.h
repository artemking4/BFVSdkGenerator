// Object: SoundDataReference
// RuntimeId: 52805
// TypeInfo: 0x0000000144E1ED40
#pragma pack(push, 8)
namespace Audio {
    struct SoundDataReference {
        char pad_0x0[0x10];
    }; // 0x10
    static_assert(sizeof(SoundDataReference) == 0x10);
}
#pragma pack(pop)