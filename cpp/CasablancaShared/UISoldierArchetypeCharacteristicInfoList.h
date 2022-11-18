// Object: UISoldierArchetypeCharacteristicInfoList
// ClassId: 5524
// RuntimeId: 23856
// TypeInfo: 0x0000000144D99D90
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UISoldierArchetypeCharacteristicInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierArchetypeCharacteristicInfoList : public Core::DataContainer {
        Array<CasablancaShared::UISoldierArchetypeCharacteristicInfo> CharacteristicInfo; // 0x18
    }; // 0x20
    static_assert(sizeof(UISoldierArchetypeCharacteristicInfoList) == 0x20);
}
#pragma pack(pop)