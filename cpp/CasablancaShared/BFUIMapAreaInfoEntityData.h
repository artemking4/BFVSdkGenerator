// Object: BFUIMapAreaInfoEntityData
// ClassId: 2300
// RuntimeId: 41807
// TypeInfo: 0x0000000144D5F5E0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIMapAreaInfoEntityData : public Entity::EntityData {
        Boolean UpdateAutomatically; // 0x20
        char pad_0x21[0xF];
        Core::Vec3 PositionToFindMapArea; // 0x30
    }; // 0x40
    static_assert(sizeof(BFUIMapAreaInfoEntityData) == 0x40);
}
#pragma pack(pop)