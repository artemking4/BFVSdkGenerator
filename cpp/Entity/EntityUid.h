// Object: EntityUid
// RuntimeId: 50804
// TypeInfo: 0x0000000144EE6300
#pragma pack(push, 4)
namespace Entity {
    struct EntityUid {
        char pad_0x0[0x4];
    }; // 0x4
    static_assert(sizeof(EntityUid) == 0x4);
}
#pragma pack(pop)