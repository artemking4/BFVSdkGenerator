// Object: CoverQueryScoreBase
// ClassId: 1438
// RuntimeId: 18184
// TypeInfo: 0x0000000144C06CE0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CoverQueryFilter.h"
#include "../BattleAIShared/CoverQueryStyle.h"
#include "../BattleAIShared/CoverQueryPosition.h"
#include "../BattleAIShared/CoverQueryDirection.h"
#include "../BattleAIShared/CoverQueryScoreSecondaryData.h"
#include "../BattleAIShared/CoverQueryCurveXSource.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverQueryScoreBase : public Core::DataContainer {
        BattleAIShared::CoverQueryStyle XStyle; // 0x18
        BattleAIShared::CoverQueryPosition FromPosition; // 0x1C
        BattleAIShared::CoverQueryPosition ToPosition; // 0x20
        BattleAIShared::CoverQueryDirection ReferenceDirection; // 0x24
        BattleAIShared::CoverQueryScoreSecondaryData SecondaryParameters; // 0x28
        BattleAIShared::CoverQueryCurveXSource CurveXSource; // 0x34
        Array<Float32> X; // 0x38
        Array<Float32> Score; // 0x40
        Boolean Enabled; // 0x48
        BattleAIShared::CoverQueryFilter Filter; // 0x49
        char pad_0x57[0x1];
    }; // 0x58
    static_assert(sizeof(CoverQueryScoreBase) == 0x58);
}
#pragma pack(pop)