// Object: EdgeModelsBaseData
// ClassId: 1532
// RuntimeId: 18355
// TypeInfo: 0x0000000144EB4F20
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Global/Uint16.h"
#include "../WorldBase/EdgeModelConnectionInfo.h"

namespace WorldBase {
    class EdgeModelsBaseData : public Core::DataContainer {
        Array<Core::LinearTransform> InstanceTransforms; // 0x18
        Array<Uint16> MeshInstanceRanges; // 0x20
        Array<Uint16> ConnectionInstanceLookupTable; // 0x28
        Array<WorldBase::EdgeModelConnectionInfo> Connections; // 0x30
        Array<Uint16> PartConnectionRanges; // 0x38
    }; // 0x40
    static_assert(sizeof(EdgeModelsBaseData) == 0x40);
}