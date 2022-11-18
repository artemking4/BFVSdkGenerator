// Object: SupportedShootingCommonData
// ClassId: 405
// RuntimeId: 55791
// TypeInfo: 0x0000000144C7E900
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/AimingConstraintsData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/SupportedShootingBinding.h"
#include "../Casablanca/SupportedShootingProximityChecking.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SupportedShootingCommonData : public Core::DataContainerPolicyAsset {
        GameShared::AimingConstraintsData AimingConstraints; // 0x20
        Int32 EnterSupportedShootingAction; // 0x30
        CasablancaShared::SupportedShootingBinding Binding; // 0x34
        Casablanca::SupportedShootingProximityChecking Stand; // 0xE8
        Casablanca::SupportedShootingProximityChecking Crouch; // 0xF8
    }; // 0x108
    static_assert(sizeof(SupportedShootingCommonData) == 0x108);
}
#pragma pack(pop)