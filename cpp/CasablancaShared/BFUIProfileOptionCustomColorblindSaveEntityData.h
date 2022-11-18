// Object: BFUIProfileOptionCustomColorblindSaveEntityData
// ClassId: 2352
// RuntimeId: 36831
// TypeInfo: 0x0000000144D87520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionCustomColorblindSaveEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIProfileOptionCustomColorblindSaveEntityData) == 0x28);
}
#pragma pack(pop)