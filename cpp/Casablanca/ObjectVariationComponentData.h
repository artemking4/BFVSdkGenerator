// Object: ObjectVariationComponentData
// ClassId: 1812
// RuntimeId: 47148
// TypeInfo: 0x0000000144C7E600
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Casablanca/ObjectVariationComponentAsset.h"
#include "../Casablanca/ShaderParameterOverridesUnlocksListAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ObjectVariationComponentData : public Entity::GameComponentData {
        Casablanca::ObjectVariationComponentAsset ObjectVariationAsset; // 0x80
        Casablanca::ShaderParameterOverridesUnlocksListAsset ShaderParameterOverridesUnlocksList; // 0x88
        Array<Int32> SetObjectVariationEventIds; // 0x90
        Array<Int32> AddShaderParameterOverridesEventIds; // 0x98
        Boolean EvaluateOnce; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(ObjectVariationComponentData) == 0xB0);
}
#pragma pack(pop)