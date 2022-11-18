// Object: SoundGraphInfo
// RuntimeId: 8923
// TypeInfo: 0x0000000144E01650
#pragma pack(push, 8)
namespace Audio {
    struct SoundGraphInfo {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(SoundGraphInfo) == 0x38);
}
#pragma pack(pop)