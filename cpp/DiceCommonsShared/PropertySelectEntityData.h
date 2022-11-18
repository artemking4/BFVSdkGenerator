// Object: PropertySelectEntityData
// ClassId: 3072
// RuntimeId: 42926
// TypeInfo: 0x0000000144DBEEB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PropertySelectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 TypeHash; // 0x24
        Array<Int32> InputPropertyHashes; // 0x28
        Array<Int32> InputEventHashes; // 0x30
        Int32 OutHash; // 0x38
        Uint32 InputCount; // 0x3C
        Int32 SelectedIndex; // 0x40
        Boolean AutoSelectOnPropertyChanged; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(PropertySelectEntityData) == 0x48);
}
#pragma pack(pop)