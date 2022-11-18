// Object: DiceShooterInputConfigurationAsset
// ClassId: 537
// RuntimeId: 6442
// TypeInfo: 0x0000000144DF8EC0
#include "../GameShared/InputConfigurationAsset.h"
#include "../DiceShooterShared/InputConceptFilter.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class DiceShooterInputConfigurationAsset : public GameShared::InputConfigurationAsset {
        Array<DiceShooterShared::InputConceptFilter> InputConceptFilters; // 0x88
    }; // 0x90
    static_assert(sizeof(DiceShooterInputConfigurationAsset) == 0x90);
}
#pragma pack(pop)