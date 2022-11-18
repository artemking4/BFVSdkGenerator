// Object: PartInfoData
// RuntimeId: 6675
// TypeInfo: 0x0000000144F0E640
#pragma pack(push, 16)
namespace Physics {
    struct PartInfoData {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(PartInfoData) == 0x30);
}
#pragma pack(pop)