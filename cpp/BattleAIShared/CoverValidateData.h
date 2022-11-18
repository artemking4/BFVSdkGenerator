// Object: CoverValidateData
// ClassId: 1474
// RuntimeId: 530
// TypeInfo: 0x0000000144C060E0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/CoverValidationScoreData.h"
#include "../BattleAIShared/CoverScoreExecutionParams.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverValidateData : public Core::DataContainer {
        Array<BattleAIShared::CoverValidationScoreData> Validators; // 0x18
        BattleAIShared::CoverScoreExecutionParams ExecutionParams; // 0x20
    }; // 0x40
    static_assert(sizeof(CoverValidateData) == 0x40);
}
#pragma pack(pop)