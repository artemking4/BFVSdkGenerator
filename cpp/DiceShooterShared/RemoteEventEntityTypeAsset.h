// Object: RemoteEventEntityTypeAsset
// ClassId: 383
// RuntimeId: 49428
// TypeInfo: 0x0000000144DECF20
#include "../Core/DataContainerPolicyAsset.h"
#include "../DiceShooterShared/RemotePropertyDefinition.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RemoteEventEntityTypeAsset : public Core::DataContainerPolicyAsset {
        Array<DiceShooterShared::RemotePropertyDefinition> Properties; // 0x20
    }; // 0x28
    static_assert(sizeof(RemoteEventEntityTypeAsset) == 0x28);
}
#pragma pack(pop)