// Object: EffectParameter
// ClassId: 1538
// RuntimeId: 43649
// TypeInfo: 0x0000000144E237A0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../EffectBase/EffectParameterType.h"
#include "../EffectBase/EffectParameterScopeType.h"

#pragma pack(push, 8)
namespace EffectBase {
    class EffectParameter : public Core::DataContainer {
        CString Name; // 0x18
        EffectBase::EffectParameterType ParamType; // 0x20
        EffectBase::EffectParameterScopeType ParamScope; // 0x24
    }; // 0x28
    static_assert(sizeof(EffectParameter) == 0x28);
}
#pragma pack(pop)