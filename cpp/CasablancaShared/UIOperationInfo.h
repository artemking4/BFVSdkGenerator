// Object: UIOperationInfo
// ClassId: 5511
// RuntimeId: 47212
// TypeInfo: 0x0000000144D14400
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIBattleInfo.h"
#include "../CasablancaShared/OperationScoringMultipliers.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOperationInfo : public Core::DataContainer {
        Array<CasablancaShared::UIBattleInfo> Battles; // 0x18
        CasablancaShared::OperationScoringMultipliers ScoringMultipliers; // 0x20
    }; // 0x38
    static_assert(sizeof(UIOperationInfo) == 0x38);
}
#pragma pack(pop)