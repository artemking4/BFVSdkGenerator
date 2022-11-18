// Object: CoverValidationScoreData
// ClassId: 1475
// RuntimeId: 29157
// TypeInfo: 0x0000000144C066E0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/CoverScoreDataBase.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/CoverValidationStatus.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverValidationScoreData : public Core::DataContainer {
        BattleAIShared::CoverScoreDataBase Scorer; // 0x18
        Float32 MinTimeToInvalidate; // 0x20
        BattleAIShared::CoverValidationStatus InvalidationReason; // 0x24
        Boolean ActiveWhenMovingToCover; // 0x28
        Boolean ActiveWhenReachedCover; // 0x29
        Boolean ExitInvalidatedCover; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(CoverValidationScoreData) == 0x30);
}
#pragma pack(pop)