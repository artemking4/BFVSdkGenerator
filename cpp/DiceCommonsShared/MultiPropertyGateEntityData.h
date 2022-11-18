// Object: MultiPropertyGateEntityData
// ClassId: 2897
// RuntimeId: 54077
// TypeInfo: 0x0000000144DBF030
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceCommonsShared/MultiPropertyGatePropertyInfo.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class MultiPropertyGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<DiceCommonsShared::MultiPropertyGatePropertyInfo> RuntimeProperties; // 0x28
        Boolean WritePropertiesOnOpenGate; // 0x30
        Boolean Open; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(MultiPropertyGateEntityData) == 0x38);
}
#pragma pack(pop)