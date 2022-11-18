// Object: EvasiveSettings
// ClassId: 1601
// RuntimeId: 50830
// TypeInfo: 0x0000000144C198B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class EvasiveSettings : public Core::DataContainer {
        Float32 StartEvasiveThreshold; // 0x18
        Float32 StopEvasiveThreshold; // 0x1C
    }; // 0x20
    static_assert(sizeof(EvasiveSettings) == 0x20);
}
#pragma pack(pop)