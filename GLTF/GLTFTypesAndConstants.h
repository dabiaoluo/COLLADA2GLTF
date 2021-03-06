// Copyright (c) 2012, Motorola Mobility, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of the Motorola Mobility, Inc. nor the names of its
//    contributors may be used to endorse or promote products derived from this
//    software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef __JSON_EXPORT_TYPES_AND_CONSTANTS_H__
#define __JSON_EXPORT_TYPES_AND_CONSTANTS_H__

#define EXPORT_MATERIALS_AS_EFFECTS 1

const std::string glTFVersion = "1.0.1";

const std::string kCount = "count";
const std::string kByteOffset = "byteOffset";
const std::string kByteStride = "byteStride";
const std::string kByteLength = "byteLength";
const std::string kURI = "uri";
const std::string kType = "type";
const std::string kComponentType = "componentType";
const std::string kBufferView = "bufferView";
const std::string kBufferViews = "bufferViews";
const std::string kMin = "min";
const std::string kMax = "max";
const std::string kIndices = "indices";
const std::string kMaterial = "material";
const std::string kMaterials = "materials";
const std::string kMode = "mode";
const std::string kPrimitive = "primitive";
const std::string kName = "name";
const std::string kExtensions = "extensions";
const std::string kExtensionsUsed = "extensionsUsed";
const std::string kPrimitives = "primitives";
const std::string kAttributes = "attributes";
const std::string kBindShapeMatrix = "bindShapeMatrix";
const std::string kInverseBindMatrices = "inverseBindMatrices";
const std::string kSamplers = "samplers";
const std::string kChannels = "channels";
const std::string kParameters = "parameters";
const std::string kBuffer = "buffer";
const std::string kTechnique = "technique";
const std::string kValues = "values";
const std::string kValue = "value";
const std::string kPremultipliedAlpha = "premultipliedAlpha";
const std::string kProfile = "profile";
const std::string kVersion = "version";
const std::string kAsset = "asset";
const std::string kNodes = "nodes";
const std::string kMeshes = "meshes";
const std::string kAccessors = "accessors";
const std::string kTarget = "target";
const std::string kGeometry = "geometry";
const std::string kAnimation = "animation";
const std::string kScene = "scene";
const std::string kScenes = "scenes";
const std::string kNode = "node";
const std::string kChildren = "children";
const std::string kSources = "sources";
const std::string kSource = "source";
const std::string kSkin = "skin";
const std::string kSkins = "skins";
const std::string kImages = "images";
const std::string kImage = "image";
const std::string kCamera = "camera";
const std::string kLights = "lights";
const std::string kLight = "light";
const std::string kSemantic = "semantic";
const std::string kJointName = "jointName";
const std::string kJointNames = "jointNames";
const std::string kDoubleSided = "doubleSided";
const std::string kAspectRatio = "aspectRatio";

const std::string MODELVIEW = "MODELVIEW";
const std::string MODELVIEWINVERSETRANSPOSE = "MODELVIEWINVERSETRANSPOSE";
const std::string MODELVIEWINVERSE = "MODELVIEWINVERSE";
const std::string PROJECTION = "PROJECTION";
const std::string JOINTMATRIX = "JOINTMATRIX";

namespace GLTF
{
    class JSONObject;
    class GLTFAccessor;
    class GLTFPrimitive;
    class GLTFAccessor;
    class JSONValue;
    class GLTFMesh;
    class GLTFEffect;
    class JSONVertexAttribute;
    class GLTFAnimationFlattener;
    //-- Args & Options
    typedef std::vector <std::shared_ptr <GLTF::JSONValue> > JSONValueVector;
    typedef JSONValueVector& JSONValueVectorRef;
    typedef std::vector <std::shared_ptr <GLTF::GLTFPrimitive> > PrimitiveVector;
    typedef std::vector <std::shared_ptr<GLTF::GLTFAccessor> > IndicesVector;
    typedef std::vector <std::shared_ptr<GLTF::GLTFAccessor> > MeshAttributeVector;
    typedef std::vector <std::shared_ptr<GLTF::JSONVertexAttribute> > VertexAttributeVector;
    
    typedef std::shared_ptr<GLTFMesh> GLTFMeshSharedPtr;
    typedef std::vector <std::shared_ptr<GLTF::GLTFMesh> > MeshVector;

    typedef std::map<std::string , std::shared_ptr <GLTFAnimationFlattener> > AnimationFlattenerForTargetUID;
    typedef std::shared_ptr<AnimationFlattenerForTargetUID> AnimationFlattenerForTargetUIDSharedPtr;
    typedef std::map<std::string , AnimationFlattenerForTargetUIDSharedPtr > FlattenerMapsForAnimationID;

    std::string generateIDForType( const char* typeCStr, const char* suffix = 0);
    
    typedef enum {
        POSITION = 1,
        NORMAL = 2,
        TEXCOORD = 3,
        COLOR = 4,
        WEIGHT = 5,
        JOINT = 6,
        TEXTANGENT = 7,
        TEXBINORMAL = 8
    } Semantic;    

    typedef std::string JSONType;
    
    const std::string kJSONNumber = "number";
    const std::string kJSONObject = "object";
    const std::string kJSONArray = "array";
    const std::string kJSONString = "string";    
};

#endif
