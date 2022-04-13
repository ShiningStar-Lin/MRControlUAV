/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

using System;
using System.Collections.Generic;
using System.IO;
using LCM.LCM;
 
namespace std_msgs
{
    public sealed class Int16Stamp_List : LCM.LCM.LCMEncodable
    {
        public double timestamp;
        public int n;
        public std_msgs.Int16[] data;
 
        public Int16Stamp_List()
        {
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xf8c5bccaee56f83eL;
 
        static Int16Stamp_List()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("std_msgs.Int16Stamp_List"))
                return 0L;
 
            classes.Add("std_msgs.Int16Stamp_List");
            ulong hash = LCM_FINGERPRINT_BASE
                 + std_msgs.Int16._hashRecursive(classes)
                ;
            classes.RemoveAt(classes.Count - 1);
            return (hash<<1) + ((hash>>63)&1);
        }
 
        public void Encode(LCMDataOutputStream outs)
        {
            outs.Write((long) LCM_FINGERPRINT);
            _encodeRecursive(outs);
        }
 
        public void _encodeRecursive(LCMDataOutputStream outs)
        {
            outs.Write(this.timestamp); 
 
            outs.Write(this.n); 
 
            for (int a = 0; a < this.n; a++) {
                this.data[a]._encodeRecursive(outs); 
            }
 
        }
 
        public Int16Stamp_List(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public Int16Stamp_List(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static std_msgs.Int16Stamp_List _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            std_msgs.Int16Stamp_List o = new std_msgs.Int16Stamp_List();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.timestamp = ins.ReadDouble();
 
            this.n = ins.ReadInt32();
 
            this.data = new std_msgs.Int16[(int) n];
            for (int a = 0; a < this.n; a++) {
                this.data[a] = std_msgs.Int16._decodeRecursiveFactory(ins);
            }
 
        }
 
        public std_msgs.Int16Stamp_List Copy()
        {
            std_msgs.Int16Stamp_List outobj = new std_msgs.Int16Stamp_List();
            outobj.timestamp = this.timestamp;
 
            outobj.n = this.n;
 
            outobj.data = new std_msgs.Int16[(int) n];
            for (int a = 0; a < this.n; a++) {
                outobj.data[a] = this.data[a].Copy();
            }
 
            return outobj;
        }
    }
}

