// Object: BFUICalibrationManagerEntityData
// ClassId: 2166
// RuntimeId: 51559
// TypeInfo: 0x0000000144D87BA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICalibrationManagerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUICalibrationManagerEntityData) == 0x28);
}
#pragma pack(pop)