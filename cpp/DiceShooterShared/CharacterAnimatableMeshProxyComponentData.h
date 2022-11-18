// Object: CharacterAnimatableMeshProxyComponentData
// ClassId: 1805
// RuntimeId: 7576
// TypeInfo: 0x0000000144DE7C90
#include "../GameShared/FakePhysicsMeshComponentData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/CharacterAnimatableMeshProxyComponentBinding.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class CharacterAnimatableMeshProxyComponentData : public GameShared::FakePhysicsMeshComponentData {
        Array<Core::LinearTransform> MeshTransforms; // 0xB0
        DiceShooterShared::CharacterAnimatableMeshProxyComponentBinding Binding; // 0xB8
        Boolean Enabled; // 0xE0
        char pad_0xE1[0xF];
    }; // 0xF0
    static_assert(sizeof(CharacterAnimatableMeshProxyComponentData) == 0xF0);
}
#pragma pack(pop)