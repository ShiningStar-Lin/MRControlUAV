// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

using Microsoft.Geospatial;
using Microsoft.Maps.Unity;
using Microsoft.Maps.Unity.Search;
using TMPro;
using UnityEngine;

namespace Reverse
{
    /// <summary>
    /// Instantiates a <see cref="MapPin"/> for each location that is reverse geocoded.
    /// The <see cref="MapPin"/> will display the address of the reverse geocoded location.
    /// </summary>
    [RequireComponent(typeof(MapRenderer))]
    public class ReverseGeocodeOnClick : MonoBehaviour
    {
        private MapRenderer _mapRenderer = null;

        [HideInInspector]
        public double mapLatitude = 0.0f;
        [HideInInspector]
        public double mapLongitude = 0.0f;
        /// <summary>
        /// The layer to place MapPins.
        /// </summary>
        [SerializeField]
        private MapPinLayer _mapPinLayer = null;

        /// <summary>
        /// The MapPin prefab to instantiate for each location that is reverse geocoded.
        /// If it uses a TextMeshPro component, the address text will be written to it.
        /// </summary>
        [SerializeField]
        private MapPin _mapPinPrefab = null;

        public void Awake()
        {
            _mapRenderer = GetComponent<MapRenderer>();
            Debug.Assert(_mapRenderer != null);
            Debug.Assert(_mapPinLayer != null);
        }

        public async void OnTapAndHold(LatLonAlt latLonAlt)
        {
            if (ReferenceEquals(MapSession.Current, null) || string.IsNullOrEmpty(MapSession.Current.DeveloperKey))
            {
                Debug.LogError(
                    "Provide a Bing Maps key to use the map services. " +
                    "This key can be set on a MapSession component.");
                return;
            }

            var finderResult = await MapLocationFinder.FindLocationsAt(latLonAlt.LatLon);

            string formattedAddressString = null;
            if (finderResult.Locations.Count > 0)
            {
                formattedAddressString = finderResult.Locations[0].Address.FormattedAddress;
            }

            if (_mapPinPrefab != null)
            {
                // Create a new MapPin instance at the specified location.
                var newMapPin = Instantiate(_mapPinPrefab);
                newMapPin.Location = latLonAlt.LatLon;
                Debug.Log("newMapPin Location-Latitude : " + newMapPin.Location.LatitudeInDegrees +
                    "  Location-Longitude : " + newMapPin.Location.LongitudeInDegrees);

                //长按获取地图中对应的经纬度
                mapLatitude = newMapPin.Location.LatitudeInDegrees;
                mapLongitude = newMapPin.Location.LongitudeInDegrees;
                var textMesh = newMapPin.GetComponentInChildren<TextMeshPro>();
                textMesh.text = formattedAddressString ?? "No address found.";

                _mapPinLayer.MapPins.Add(newMapPin);
            }
        }

        public double GetMapLatitude()
        {
            return mapLatitude;
        }
        public double GetMapLongitude()
        {
            return mapLongitude;
        }
    }

}