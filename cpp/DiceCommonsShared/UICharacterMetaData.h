// Object: UICharacterMetaData
// ClassId: 5470
// RuntimeId: 38954
// TypeInfo: 0x0000000144DB6490
#include "../DiceCommonsShared/UIMeshDefinitionMetaData.h"
#include "../Global/Int32.h"
#include "../DiceCommonsShared/BaseSetAsset.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class UICharacterMetaData : public DiceCommonsShared::UIMeshDefinitionMetaData {
        Int32 CharacterType; // 0x18
        Int32 Gender; // 0x1C
        Array<DiceCommonsShared::BaseSetAsset> Sets; // 0x20
    }; // 0x28
    static_assert(sizeof(UICharacterMetaData) == 0x28);
}
#pragma pack(pop)