// Object: AssetReference
// RuntimeId: 44010
// TypeInfo: 0x0000000144DCA840
#pragma pack(push, 4)
namespace DicePersistenceShared {
    struct AssetReference {
        char pad_0x0[0x20];
    }; // 0x20
    static_assert(sizeof(AssetReference) == 0x20);
}
#pragma pack(pop)