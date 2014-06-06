/**
 * Copyright (c) 2011-2014 sx developers (see AUTHORS)
 *
 * This file is part of sx.
 *
 * sx is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <sx/command/brainwallet.hpp>
#include <sx/command/unwrap.hpp>
#include <sx/utility/console.hpp>
#include <sx/utility/dispatch.hpp>

using namespace sx;
using namespace sx::extensions;

console_result brainwallet::invoke(int argc, const char* argv[])
{
    line_out(std::cerr, "sx: This command is not yet ported from python.");
    return console_result::failure;
}

//#!/usr/bin/python
//import  sys, subprocess, hashlib
//PIPE = subprocess.PIPE
//
//def runcmd(args,inp=''):
//    p = subprocess.Popen(args, stdout=PIPE, stdin=PIPE, stderr=PIPE)
//    return p.communicate(input=inp)[0]
//
//args, opts = [], {}
//i = 1
//while i < len(sys.argv):
//    if sys.argv[i][0:2] == '--':
//        opts[sys.argv[i][2:]] = sys.argv[i+1]
//        i += 2
//    else:
//        args.append(sys.argv[i])
//        i += 1
//
//if len(args) == 0: seed = ''
//elif len(args) == 1: seed = args[0]
//else: seed = args[0] + ':' + args[1]
//
//def sha256(x): return hashlib.sha256(x).hexdigest()
//
//def slowsha(x,rounds=1000):
//    old, new = x, ''
//    for i in range(rounds):
//        new = hashlib.sha256(old).digest()
//        old = new+x
//    return new.encode('hex')
//
//if opts.get('algo','') == 'slowsha': algo = slowsha
//elif opts.get('rounds',None): algo = lambda x: slowsha(x,int(opts['rounds']))
//else: algo = sha256
//
//print runcmd(['sx','base58check-encode',algo(seed),'128']).strip()