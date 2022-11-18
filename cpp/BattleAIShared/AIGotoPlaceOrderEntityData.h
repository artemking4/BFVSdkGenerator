// Object: AIGotoPlaceOrderEntityData
// ClassId: 1984
// RuntimeId: 50958
// TypeInfo: 0x0000000144C11880
#include "../BattleAIShared/AIOrderEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AIMoveSettings.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIGotoPlaceOrderEntityData : public BattleAIShared::AIOrderEntityBaseData {
        Float32 MaxDistance; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform GoToPosition; // 0x30
        Float32 MinDistance; // 0x70
        Float32 ChangeOfDestinationDistanceTolerance; // 0x74
        BattleAIShared::AIMoveSettings MoveSettingsAlerted; // 0x78
        BattleAIShared::AIMoveSettings MoveSettingsNotAlerted; // 0x80
        Boolean RandomizeDestination; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(AIGotoPlaceOrderEntityData) == 0x90);
}
#pragma pack(pop)