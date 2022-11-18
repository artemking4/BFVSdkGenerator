// Object: BulletHitInfo
// RuntimeId: 42537
// TypeInfo: 0x0000000144F463D0
#pragma pack(push, 16)
namespace SoldierShared {
    struct BulletHitInfo {
        char pad_0x0[0x50];
    }; // 0x50
    static_assert(sizeof(BulletHitInfo) == 0x50);
}
#pragma pack(pop)