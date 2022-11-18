// Object: WeatherSequencerEntityData
// ClassId: 3921
// RuntimeId: 19507
// TypeInfo: 0x0000000144CFA8D0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/WSLevelSetup.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/WSFloatVariable.h"
#include "../CasablancaShared/WSIntVariable.h"
#include "../CasablancaShared/WSBoolVariable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherSequencerEntityData : public Entity::EntityData {
        CasablancaShared::WSLevelSetup LevelSetup; // 0x20
        Array<Int32> OutputPropertyHashes; // 0x28
        Array<CasablancaShared::WSFloatVariable> WSFloatVariables; // 0x30
        Array<CasablancaShared::WSIntVariable> WSIntVariables; // 0x38
        Array<CasablancaShared::WSBoolVariable> WSBoolVariables; // 0x40
    }; // 0x48
    static_assert(sizeof(WeatherSequencerEntityData) == 0x48);
}
#pragma pack(pop)