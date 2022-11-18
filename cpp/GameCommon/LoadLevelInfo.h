// Object: LoadLevelInfo
// RuntimeId: 15980
// TypeInfo: 0x0000000144E49890
#pragma pack(push, 8)
namespace GameCommon {
    struct LoadLevelInfo {
        char pad_0x0[0x38];
    }; // 0x38
    static_assert(sizeof(LoadLevelInfo) == 0x38);
}
#pragma pack(pop)