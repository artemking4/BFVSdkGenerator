// Object: SoundDataChunk
// RuntimeId: 38836
// TypeInfo: 0x0000000144E1EC50
#pragma pack(push, 4)
namespace Audio {
    struct SoundDataChunk {
        char pad_0x0[0x14];
    }; // 0x14
    static_assert(sizeof(SoundDataChunk) == 0x14);
}
#pragma pack(pop)