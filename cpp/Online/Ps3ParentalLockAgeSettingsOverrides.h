// Object: Ps3ParentalLockAgeSettingsOverrides
// ClassId: 4553
// RuntimeId: 44534
// TypeInfo: 0x0000000144F03910
#include "../Core/DataContainer.h"
#include "../Online/Ps3ParentalLockAgeSettingsForCountry.h"

#pragma pack(push, 8)
namespace Online {
    class Ps3ParentalLockAgeSettingsOverrides : public Core::DataContainer {
        Array<Online::Ps3ParentalLockAgeSettingsForCountry> Overrides; // 0x18
    }; // 0x20
    static_assert(sizeof(Ps3ParentalLockAgeSettingsOverrides) == 0x20);
}
#pragma pack(pop)